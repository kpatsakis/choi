void fun()
{
  char* entity_2;
  char entity_0[98] = "";
  entity_0 = NULL;
  char entity_5 = 'r';
  char* entity_8;
  char entity_4 = 'E';
  memset(entity_0, 'r', 98-1);
  entity_0[98-1]='';
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  memcpy(entity_2, entity_0, 98*sizeof(char));
}