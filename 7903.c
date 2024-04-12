void fun()
{
  char entity_6 = 'x';
  char* entity_0;
  char entity_5[22] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  memset(entity_5, 'W', 22-1);
  entity_5[22-1]='';
  memcpy(entity_0, entity_5, 22*sizeof(char));
}