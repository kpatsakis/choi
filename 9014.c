void fun()
{
  int entity_8 = 40;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_0;
  entity_7 = (char*)malloc(100*sizeof(char));
  entity_7[100-1]='';
  memset(entity_2, 'm', entity_8-1);
  entity_2[entity_8-1]='';
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[31-1]='';
  memcpy(entity_7, entity_2, entity_8*sizeof(char));
}