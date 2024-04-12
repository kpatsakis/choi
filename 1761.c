void fun()
{
  int entity_4 = 98;
  char entity_6 = 'w';
  char entity_0[70] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'W', 70-1);
  entity_0[70-1]='';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  strcpy(entity_3, entity_0);
}