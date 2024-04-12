void fun()
{
  int entity_8 = 72;
  int entity_5 = 67;
  entity_8 = 100;
  char* entity_1;
  char* entity_2;
  char entity_6[40] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  memset(entity_6, 'J', 40-1);
  entity_6[40-1]='';
  strcpy(entity_1, entity_6);
}