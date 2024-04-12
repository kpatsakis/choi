void fun()
{
  int entity_0 = 77;
  int entity_8 = 95;
  int entity_6 = 83;
  char* entity_4;
  char* entity_2;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  memset(entity_7, 'W', entity_8-1);
  entity_7[entity_8-1]='';
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[22-1]='';
  strcpy(entity_2, entity_7);
}