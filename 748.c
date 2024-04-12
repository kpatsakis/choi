void fun()
{
  int entity_4 = 85;
  int entity_1 = 41;
  char* entity_3;
  char* entity_7;
  char entity_5[42] = "";
  entity_5 = NULL;
  memset(entity_5, 'E', 42-1);
  entity_5[42-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  entity_7 = (char*)malloc(25*sizeof(char));
  entity_7[25-1]='';
  memcpy(entity_7, entity_5, 42*sizeof(char));
}