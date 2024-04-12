void fun()
{
  int entity_9 = 18;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_8[16] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[74-1]='';
  memset(entity_6, 'I', entity_9-1);
  entity_6[entity_9-1]='';
  memset(entity_8, 'Y', 16-1);
  entity_8[16-1]='';
  entity_6[28] = 'y';
}