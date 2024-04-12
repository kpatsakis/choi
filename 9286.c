void fun()
{
  int entity_8 = 5;
  char* entity_1;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'd', entity_8-1);
  entity_7[entity_8-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  memcpy(entity_1, entity_7, entity_8*sizeof(char));
}