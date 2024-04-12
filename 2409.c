void fun()
{
  int entity_7 = 44;
  entity_7 = 35;
  char* entity_2;
  char* entity_0;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'q', entity_7-1);
  entity_8[entity_7-1]='';
  entity_0 = (char*)malloc(66*sizeof(char));
  entity_0[66-1]='';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  memcpy(entity_0, entity_8, entity_7*sizeof(char));
}