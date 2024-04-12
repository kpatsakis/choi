void fun()
{
  char* entity_9;
  char entity_1[88] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[71-1]='';
  memset(entity_1, 'f', 88-1);
  entity_1[88-1]='';
  memcpy(entity_9, entity_1, 88*sizeof(char));
}