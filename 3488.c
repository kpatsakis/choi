void fun()
{
  int entity_0 = 57;
  char* entity_2;
  char entity_8[92] = "";
  entity_8 = NULL;
  char entity_6[83] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  memset(entity_8, 'c', 92-1);
  entity_8[92-1]='';
  memset(entity_6, 'P', 83-1);
  entity_6[83-1]='';
  strcpy(entity_2, entity_8);
}