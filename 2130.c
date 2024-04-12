void fun()
{
  int entity_7 = 78;
  char entity_1 = 'y';
  char* entity_5;
  char* entity_4;
  char entity_0[39] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(33*sizeof(char));
  entity_5[33-1]='';
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  memset(entity_0, 'e', 39-1);
  entity_0[39-1]='';
  strcpy(entity_5, entity_0);
}