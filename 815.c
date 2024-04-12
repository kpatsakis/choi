void fun()
{
  int entity_7 = 47;
  char* entity_2;
  char* entity_8;
  char entity_6[69] = "";
  entity_6 = NULL;
  memset(entity_6, 'A', 69-1);
  entity_6[69-1]='';
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[69-1]='';
  entity_8 = (char*)malloc(91*sizeof(char));
  entity_8[91-1]='';
  strcpy(entity_2, entity_6);
}