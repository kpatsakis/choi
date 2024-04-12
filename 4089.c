void fun()
{
  int entity_4 = 59;
  char entity_9 = 'N';
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(23*sizeof(char));
  entity_3[23-1]='';
  memset(entity_2, 'J', entity_4-1);
  entity_2[entity_4-1]='';
  memcpy(entity_3, entity_2, entity_4*sizeof(char));
}