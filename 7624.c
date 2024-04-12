void fun()
{
  int entity_3 = 68;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_7;
  char* entity_4;
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[73-1]='';
  memset(entity_8, 'C', entity_3-1);
  entity_8[entity_3-1]='';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  entity_3 = 61;
  strcpy(entity_7, entity_8);
}