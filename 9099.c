void fun()
{
  int entity_1 = 23;
  entity_1 = 60;
  char entity_7[88] = "";
  entity_7 = NULL;
  char* entity_3;
  char* entity_5;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_7, 'O', 88-1);
  entity_7[88-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  memcpy(entity_3, entity_7, 88*sizeof(char));
}