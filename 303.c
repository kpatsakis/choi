void fun()
{
  char* entity_7;
  char entity_1[83] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  memset(entity_1, 'c', 83-1);
  entity_1[83-1]='';
  memcpy(entity_7, entity_1, 83*sizeof(char));
}