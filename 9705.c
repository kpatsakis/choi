void fun()
{
  int entity_0 = 37;
  char* entity_2;
  char* entity_8;
  char entity_3[71] = "";
  entity_3 = NULL;
  memset(entity_3, 's', 71-1);
  entity_3[71-1]='';
  entity_8 = (char*)malloc(100*sizeof(char));
  entity_8[100-1]='';
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  strcpy(entity_8, entity_3);
}