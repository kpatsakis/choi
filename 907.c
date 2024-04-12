void fun()
{
  int entity_6 = 85;
  int entity_0 = 15;
  char entity_8 = 'O';
  char* entity_3;
  char entity_2[52] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_2, 'z', 52-1);
  entity_2[52-1]='';
  strcpy(entity_3, entity_2);
}