void fun()
{
  char entity_5 = 'v';
  char entity_8 = 'r';
  char entity_1[3] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'R', 3-1);
  entity_1[3-1]='';
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  memcpy(entity_7, entity_1, 3*sizeof(char));
}