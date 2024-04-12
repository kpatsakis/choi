void fun()
{
  int entity_8 = 41;
  char* entity_2;
  char* entity_0;
  char entity_3[26] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_3, 'O', 26-1);
  entity_3[26-1]='';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[92-1]='';
  strcpy(entity_2, entity_3);
}