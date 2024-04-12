void fun()
{
  int entity_8 = 53;
  char entity_2[18] = "";
  entity_2 = NULL;
  char entity_1[99] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'G', 99-1);
  entity_1[99-1]='';
  memset(entity_2, 'q', 18-1);
  entity_2[18-1]='';
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[14-1]='';
  memcpy(entity_0, entity_2, 18*sizeof(char));
}