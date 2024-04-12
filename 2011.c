void fun()
{
  int entity_8 = 94;
  int entity_1 = 10;
  char entity_4[84] = "";
  entity_4 = NULL;
  char* entity_9;
  char* entity_0;
  memset(entity_4, 'O', 84-1);
  entity_4[84-1]='';
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[92-1]='';
  strcpy(entity_0, entity_4);
}