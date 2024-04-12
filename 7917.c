void fun()
{
  int entity_7 = 75;
  entity_7 = 58;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memset(entity_1, 'r', entity_7-1);
  entity_1[entity_7-1]='';
  memcpy(entity_3, entity_1, entity_7*sizeof(char));
}