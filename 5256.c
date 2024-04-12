void fun()
{
  int entity_5 = 17;
  char* entity_2;
  char entity_0[67] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_6 = 'e';
  memset(entity_0, 'B', 67-1);
  entity_0[67-1]='';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  entity_4 = (char*)malloc(2*sizeof(char));
  entity_4[2-1]='';
  strcpy(entity_2, entity_0);
}