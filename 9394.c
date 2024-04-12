void fun()
{
  int entity_7 = 83;
  char entity_6[66] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_6, 'b', 66-1);
  entity_6[66-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_5, 'e', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 93;
  memcpy(entity_8, entity_5, entity_7*sizeof(char));
}