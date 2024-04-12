void fun()
{
  char* entity_5;
  char entity_1[99] = "";
  entity_1 = NULL;
  char entity_0 = 'N';
  entity_5 = (char*)malloc(10*sizeof(char));
  entity_5[10-1]='';
  memset(entity_1, 'b', 99-1);
  entity_1[99-1]='';
  memcpy(entity_5, entity_1, 99*sizeof(char));
}