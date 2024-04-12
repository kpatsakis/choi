void fun()
{
  int entity_7 = 37;
  char* entity_8;
  char entity_6 = 'k';
  char entity_9[38] = "";
  entity_9 = NULL;
  char entity_4[66] = "";
  entity_4 = NULL;
  memset(entity_9, 'r', 38-1);
  entity_9[38-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_4, 'P', 66-1);
  entity_4[66-1]='';
  entity_7 = 82;
  memcpy(entity_8, entity_4, 66*sizeof(char));
}