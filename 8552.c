void fun()
{
  int entity_2 = 35;
  char* entity_5;
  char entity_1[14] = "";
  entity_1 = NULL;
  memset(entity_1, 's', 14-1);
  entity_1[14-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_1, 14*sizeof(char));
}