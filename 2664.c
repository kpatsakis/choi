void fun()
{
  int entity_1 = 97;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'm', entity_1-1);
  entity_3[entity_1-1]='';
  entity_7 = (char*)malloc(97*sizeof(char));
  entity_7[97-1]='';
  memcpy(entity_7, entity_3, entity_1*sizeof(char));
}