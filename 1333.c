void fun()
{
  int entity_5 = 97;
  int entity_4 = 88;
  entity_5 = 99;
  char entity_6[96] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_2[66] = "";
  entity_2 = NULL;
  char entity_1 = 'G';
  memset(entity_2, 'C', 66-1);
  entity_2[66-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_6, 'W', 96-1);
  entity_6[96-1]='';
  strcpy(entity_7, entity_6);
}