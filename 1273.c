void fun()
{
  int entity_4 = 70;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(68*sizeof(char));
  entity_0[68-1]='';
  memset(entity_6, 'Y', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_0, entity_6, entity_4*sizeof(char));
}