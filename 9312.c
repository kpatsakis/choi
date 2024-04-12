void fun()
{
  int entity_7 = 34;
  char entity_1[68] = "";
  entity_1 = NULL;
  char entity_0 = 'a';
  char* entity_6;
  char* entity_3;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[92-1]='';
  memset(entity_1, 'E', 68-1);
  entity_1[68-1]='';
  entity_7 = 45;
  memcpy(entity_6, entity_1, 68*sizeof(char));
}