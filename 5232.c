void fun()
{
  int entity_2 = 23;
  char* entity_1;
  char entity_5[84] = "";
  entity_5 = NULL;
  memset(entity_5, 'u', 84-1);
  entity_5[84-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_2 = 39;
  memcpy(entity_1, entity_5, 84*sizeof(char));
}