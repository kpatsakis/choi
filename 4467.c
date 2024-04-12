void fun()
{
  int entity_2 = 44;
  int entity_5 = 6;
  char* entity_4;
  char entity_1 = 'Q';
  char* entity_3;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[92-1]='';
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[70-1]='';
  memset(entity_8, 'm', entity_2-1);
  entity_8[entity_2-1]='';
  strcpy(entity_3, entity_8);
}