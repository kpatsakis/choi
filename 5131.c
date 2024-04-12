void fun()
{
  char* entity_1;
  char entity_3[94] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[88-1]='';
  memset(entity_3, 'q', 94-1);
  entity_3[94-1]='';
  entity_3[75] = 'H';
}