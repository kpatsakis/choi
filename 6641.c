void fun()
{
  int entity_4 = 23;
  char* entity_2;
  char entity_0[64] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_2 = (char*)malloc(74*sizeof(char));
  entity_2[74-1]='';
  memset(entity_0, 'L', 64-1);
  entity_0[64-1]='';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  strcpy(entity_3, entity_0);
}