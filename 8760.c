void fun()
{
  char entity_3 = 'z';
  char entity_4[88] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_0 = 'y';
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  memset(entity_4, 'S', 88-1);
  entity_4[88-1]='';
  memcpy(entity_9, entity_4, 88*sizeof(char));
}