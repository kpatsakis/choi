void fun()
{
  int entity_4 = 3;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_6, 'c', entity_4-1);
  entity_6[entity_4-1]='';
  entity_4 = 59;
  memcpy(entity_1, entity_6, entity_4*sizeof(char));
}