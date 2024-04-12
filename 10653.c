void fun()
{
  char entity_9[85] = "";
  char* entity_1;
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'C', 85-1);
  entity_9[85-1]='0';
  entity_9[25] = 'w';
}