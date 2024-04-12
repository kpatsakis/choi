void fun()
{
  int entity_9 = 20;
  char* entity_5;
  char* entity_3;
  char entity_2[37] = "";
  entity_2 = NULL;
  char entity_1[62] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', 62-1);
  entity_1[62-1]='';
  memset(entity_2, 'E', 37-1);
  entity_2[37-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  entity_3 = (char*)malloc(18*sizeof(char));
  entity_3[18-1]='';
  strcpy(entity_3, entity_2);
}