void fun()
{
  char* entity_1;
  char entity_9[57] = "";
  entity_9 = NULL;
  memset(entity_9, 'r', 57-1);
  entity_9[57-1]='';
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[48-1]='';
  memcpy(entity_1, entity_9, 57*sizeof(char));
}