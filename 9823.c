void fun()
{
  int entity_5 = 88;
  char* entity_2;
  char entity_8[62] = "";
  entity_8 = NULL;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_8, 'S', 62-1);
  entity_8[62-1]='';
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  memset(entity_0, 'y', entity_5-1);
  entity_0[entity_5-1]='';
  memcpy(entity_2, entity_0, entity_5*sizeof(char));
}