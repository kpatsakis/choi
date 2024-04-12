void fun()
{
  int entity_6 = 22;
  char* entity_8;
  char* entity_5;
  char entity_7[82] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(82*sizeof(char));
  entity_8[82-1]='';
  memset(entity_7, 'X', 82-1);
  entity_7[82-1]='';
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[62-1]='';
  strcpy(entity_5, entity_7);
}