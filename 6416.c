void fun()
{
  int entity_2 = 80;
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_6[96] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_1, 'x', 74-1);
  entity_1[74-1]='';
  memset(entity_6, 'a', 96-1);
  entity_6[96-1]='';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  entity_8 = (char*)malloc(26*sizeof(char));
  entity_8[26-1]='';
  strcpy(entity_8, entity_1);
}