void fun()
{
  char* entity_1;
  char entity_9[80] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'q', 80-1);
  entity_9[80-1]='';
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[91-1]='';
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memcpy(entity_1, entity_9, 80*sizeof(char));
}