void fun()
{
  int entity_6 = 83;
  char* entity_1;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_2;
  char* entity_0;
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[71-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memset(entity_7, 'l', entity_6-1);
  entity_7[entity_6-1]='';
  memcpy(entity_1, entity_7, entity_6*sizeof(char));
}