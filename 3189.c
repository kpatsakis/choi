void fun()
{
  char entity_9[83] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_0 = 'z';
  memset(entity_9, 'q', 83-1);
  entity_9[83-1]='';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memcpy(entity_2, entity_9, 83*sizeof(char));
}