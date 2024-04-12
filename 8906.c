void fun()
{
  int entity_4 = 35;
  int entity_6 = 77;
  char entity_2[82] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_3;
  memset(entity_2, 'b', 82-1);
  entity_2[82-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  entity_6 = 13;
  memcpy(entity_7, entity_2, 82*sizeof(char));
}