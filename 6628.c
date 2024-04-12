void fun()
{
  int entity_1 = 62;
  char* entity_4;
  char entity_2[44] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 44-1);
  entity_2[44-1]='';
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[10-1]='';
  memcpy(entity_4, entity_2, 44*sizeof(char));
}