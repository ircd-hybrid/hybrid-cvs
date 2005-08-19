-- $Id: confgen.pgsql,v 1.1 2005/08/19 18:24:59 knight Exp $
--
-- PostgreSQL database dump
--

SET client_encoding = 'SQL_ASCII';
SET check_function_bodies = false;
SET client_min_messages = warning;

--
-- Name: SCHEMA public; Type: COMMENT; Schema: -; Owner: postgres
--

COMMENT ON SCHEMA public IS 'Standard public schema';


SET search_path = public, pg_catalog;

SET default_tablespace = '';

SET default_with_oids = true;

--
-- Name: opers; Type: TABLE; Schema: public; Owner: alan; Tablespace: 
--

CREATE TABLE opers (
    id integer NOT NULL,
    oper character varying NOT NULL,
    hostmasks character varying[] NOT NULL,
    pass character varying NOT NULL,
    ircdflags character varying[] NOT NULL,
    active boolean,
    adminon character varying[]
);


ALTER TABLE public.opers OWNER TO alan;

--
-- Name: opers_id; Type: SEQUENCE; Schema: public; Owner: alan
--

CREATE SEQUENCE opers_id
    INCREMENT BY 1
    NO MAXVALUE
    NO MINVALUE
    CACHE 1;


ALTER TABLE public.opers_id OWNER TO alan;

--
-- Name: servers; Type: TABLE; Schema: public; Owner: alan; Tablespace: 
--

CREATE TABLE servers (
    id integer NOT NULL,
    server character varying NOT NULL,
    "location" character varying NOT NULL,
    admin character varying NOT NULL,
    description character varying NOT NULL,
    adminemail character varying NOT NULL,
    hubsequence character varying[],
    getconfpass character varying NOT NULL,
    lastcheck timestamp without time zone,
    lastupdate timestamp without time zone,
    bindtoip inet[],
    externalip inet,
    active boolean
);


ALTER TABLE public.servers OWNER TO alan;

--
-- Name: servers_id; Type: SEQUENCE; Schema: public; Owner: alan
--

CREATE SEQUENCE servers_id
    INCREMENT BY 1
    NO MAXVALUE
    NO MINVALUE
    CACHE 1;


ALTER TABLE public.servers_id OWNER TO alan;

--
-- Name: sessions; Type: TABLE; Schema: public; Owner: alan; Tablespace: 
--

CREATE TABLE sessions (
    id character(32) NOT NULL,
    a_session text NOT NULL
);


ALTER TABLE public.sessions OWNER TO alan;

--
-- Name: opers_pkey; Type: CONSTRAINT; Schema: public; Owner: alan; Tablespace: 
--

ALTER TABLE ONLY opers
    ADD CONSTRAINT opers_pkey PRIMARY KEY (id);


ALTER INDEX public.opers_pkey OWNER TO alan;

--
-- Name: servers_pkey; Type: CONSTRAINT; Schema: public; Owner: alan; Tablespace: 
--

ALTER TABLE ONLY servers
    ADD CONSTRAINT servers_pkey PRIMARY KEY (id);


ALTER INDEX public.servers_pkey OWNER TO alan;

--
-- Name: public; Type: ACL; Schema: -; Owner: postgres
--

REVOKE ALL ON SCHEMA public FROM PUBLIC;
REVOKE ALL ON SCHEMA public FROM postgres;
GRANT ALL ON SCHEMA public TO postgres;
GRANT ALL ON SCHEMA public TO PUBLIC;


--
-- Name: opers; Type: ACL; Schema: public; Owner: alan
--

REVOKE ALL ON TABLE opers FROM PUBLIC;
REVOKE ALL ON TABLE opers FROM alan;
GRANT ALL ON TABLE opers TO alan;
GRANT INSERT,SELECT,UPDATE,DELETE ON TABLE opers TO matt;


--
-- PostgreSQL database dump complete
--

