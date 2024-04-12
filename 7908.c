void fun()
{
  int entity_4 = 62;
  char* entity_8;
  char entity_5[100] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  memset(entity_5, 'L', 100-1);
  entity_5[100-1]='';
  entity_5[entity_4] = 'F';
}